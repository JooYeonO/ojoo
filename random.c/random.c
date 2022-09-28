#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main_random(void)
{
    /*int num = rand() % 3; //0~2에서 랜덤으로 하나를 뽑는다
    int num = rand() % 3+1; //1~3에서 랜덤으로 하나를 뽑는다
    srand(time(NULL)); //난수 초기화

    printf("난수 초기화 이전\n");
    for(int i=0; i<10; i++)
        printf ("%d", rand()%10);

    srand(time(NULL));
    printf("\n난수 초기화 이후\n");
    for(int i=0; i<10; i++)
    printf("%d", rand()%10);

    //가위 0 바위1 보2
    srand(time(NULL));
    int i=rand() % 3; //0~2반환
    if(i==0)
    {
        printf("가위\n");
    }
    else if(i==1)
    {
        printf("바위\n");
    }
    else if(i==2)
    {
        printf("보\n");
    }
    else
    {
        printf("nothing\n")
    }


    //switch&case

    srand(time(NULL));
    int num=rand() % 3;
    switch (num)
    {
    case 0: printf("scissor\n");
        break; //맞는 조건 이하의 모든 명령을 수행하고 실행하기 때문에 break를 넣어야 한다.
    case 1: printf("rock\n");
        break;
    case 2: printf("paper\n");
        break;
    default :printf("nothing\n");
        break;
    }
    */


    //project : up & down

    srand(time(NULL));
    int num = rand() %100+ 1; //1~100 사이의 수
    printf("number:%d\n", num);
    int answer = 0; //correct //대답은 횟수는 0부터 시작하니까! 변수는 초기값을 주어야한다.
    int chance = 5; //chance
    while (chance>0) //while (1)로 써도 가능하다. 1은 참, 0은 거짓을 의미하기 때문에. 단, 무한루프에 빠질 수 있다.
    {
        printf("%d chance \n", chance--);
        printf("let's get it(1~100) : \n" );
        scanf("%d", &answer);

        if (answer > num)
        {
            printf("down \n\n");
        }
        else if (answer<num)
        {
            printf("up\n\n");
        }
        else if(answer==num)
        {
            printf("right!\n\n");
            break; //정답을 맞추면 남은 기회에 상관없이 게임이 끝나야하므로
        }
        else
        {
            printf("error\n\n");
        }
        if (chance == 0)
        {
            printf("no rest chance. you lose.");
            break;
        }
    }
    return 0;
}