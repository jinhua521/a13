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
            arr[index] = m;
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
           
        }
        if(code == 4){
            
        }
        if(code == 5){
           
        }

    }

    return 0;

}
