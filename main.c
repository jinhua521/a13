#include<stdio.h>
char arr[1024];
int index = 0;
int main()
{
    printf("minganzifuguanlixitong\n");
    while(1)
    {
        printf("1---tianjiaminganzifu\n");
        printf("2---shanchuminganzifu（zuihouyige）\n");
        printf("3---chankansuoyouminganzifu\n");
        printf("4---tihuanneirongzhongdeminganzifu\n");
        printf("5---tuichu\n");

        printf("qingxuanzexiangyinggongneng\n");

        int code;
        scanf("%d",&code);

        if(code == 1){
            printf("qingshuryaotianjiademinganzifu\n");
            char m;
            scanf("%c",&m);
            scanf("%c",&m);
            arr[index]=m;
            index++;
            printf("tianjiachenggong,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }
        if(code == 2){
            printf("shanchuzuihouyigeminganzifu\n");
            index--;
            printf("shanchuchenggong,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }
        if(code == 3){
           printf("suoyouminganzifuruxia:\n");
            for (int i = 0; i <index;i++){
                printf("di%dgeminganzifuwei%c\n", i + 1, arr[i]);
            }
            printf("shanchuchenggong,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }
        if(code == 4){
            printf("qingshuruyiduanyingwen:\n");
            char nerirong[1024];

            scanf("%s",nerirong);
            for(int i = 0;1;i++){
                if(nerirong[i] == '\0'){
                    break;
                }
                if(isMingan(arr[i]) == 1){
                    nerirong[i] = '*';
                }
                printf("%c",nerirong[i]);
            }
            printf("\n");
            printf("tihuanwancheng,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }
        if(code == 5){
           printf("tuichuxitong\n");
            break;

        }

    }

    return 0;

}
