    #include <algorithm>
    #include <iostream>
    #include <cstdlib>
    #include <cstring>
    #include <cstdio>

    using namespace std;

    //union_set
    int sets[1000001];
    int ranka[1000001];

    void set_inital(int a, int b)
    {
        for (int i = a; i <= b; ++ i) {
            ranka[i] = 0;
            sets[i] = i;
        }
    }

    int set_find(int a)
    {
        if (a != sets[a])
            sets[a] = set_find(sets[a]);
        return sets[a];
    }

    void set_union(int a, int b)
    {
        if (ranka[a] < ranka[b])
            sets[a] = b;
        else {
            if (ranka[a] == ranka[b])
                ranka[a] ++;
            sets[b] = a;
        }
    }
    //end_union_set

    //multilevel_queue
    typedef struct _queuelist
    {
        int first, last;
        int value;
        int next;
    }queuelist;
    queuelist mlList[10001], mlRoot;

    typedef struct _queuenode
    {
        int value;
        int next;
    }queuenode;
    queuenode mlNode[1000001];

    int hashlist[1000001];
    int mlnodesize;
    int mllistsize;

    void mlqueue_iniital()
    {
        memset(hashlist, -1, sizeof(hashlist));
        memset(mlList, 0, sizeof(mlList));
        memset(mlNode, 0, sizeof(mlNode));
        mlnodesize = 1;
        mllistsize = 1;
        mlRoot.first = mlRoot.last = 0;
    }

    void mlqueue_enqueue(int id, int value)
    {
        if (hashlist[id] == -1) {//不存在同类，创建对应的链表，放在链表列的最后并
            hashlist[id] = mllistsize;
            mlList[hashlist[id]].first = mlnodesize;
            mlList[mlRoot.last].next = mllistsize;
            mlRoot.last = mllistsize ++;
            mlList[mlRoot.last].value = id;
            if (mlRoot.first == 0)//第一个节点
                mlRoot.first = mlRoot.last;
        }
        //已存在同类，插入对应的链表末端
        int ListIndex = hashlist[id];
        mlNode[mlnodesize].value = value;
        mlNode[mlList[ListIndex].last].next = mlnodesize;
        mlList[ListIndex].last = mlnodesize ++;
    }

    int mlqueue_dequeue()
    {
        //没有元素
        if (mlRoot.first == 0) return -1;
        //删除第一个链表的第一个元素
        int ListIndex = mlRoot.first;
        int value = mlNode[mlList[ListIndex].first].value;
        mlList[ListIndex].first = mlNode[mlList[ListIndex].first].next;
        //链表只有一个元素，删除链表
        if (mlList[ListIndex].first == 0) {
            hashlist[mlList[ListIndex].value] = -1;
            mlRoot.first = mlList[mlRoot.first].next;
            //唯一元素，清空队列的链表
            if (mlRoot.first == 0) {
                mlRoot.last = 0;
            }
        }
        return value;
    }
    //end_multilevel_queue

    int main()
    {
        int cases = 1, t, m;//read team queue
        while (~scanf("%d",&t) && t) {
            //read data
            int buf[1001];
            set_inital(0, 999999);
            while (t --) {
                scanf("%d%d",&m,&buf[0]);
                for (int i = 1; i < m; ++ i) {
                    scanf("%d",&buf[i]);
                }
                for (int i = 1; i < m; ++ i) {
                    set_union(set_find(buf[0]), set_find(buf[i]));
                }
            }

            //deal data
            int  id;
            char command[20];
            mlqueue_iniital();
            printf("Line #%d\n",cases ++);
            while (~scanf("%s",command) && strcmp(command, "STOP")) {
                if (!strcmp(command, "ENQUEUE")) {
                    scanf("%d",&id);
                    mlqueue_enqueue(set_find(id), id);
                }
                if (!strcmp(command, "DEQUEUE")) {
                    printf("%d\n",mlqueue_dequeue());
                }
            }
            //puts("");
        }
        return 0;
    }
