//*************************************************ATM INTERFACE************************************************************
int main()

{
    int i;
    int pw;
    float cash;
    int input;
    for (i = 0; i < 4; i++)
    {
        printf("incorrect attempt:%d\n",i);
        printf("%c\n",Beep(500,800));
        printf("Enter ATM pin:\n");
        scanf("%d",&pw);

        if (pw==3108)
        {
            break;
        }

        if (i==3){
            goto end;
        }
        else{
            continue;
        }
    }
    printf("********Correct Password*********\n");
    printf("Enter amount:\n");
    scanf("%f",&cash);

    printf("Dispensing\n %f Rs \n\n",cash);
    printf("Please collect your cash\n");
    printf("%c%c%c%c%u\n",Beep(1000,150),Beep(1000,150),Beep(1000,150),Beep(1000,150),Beep(1000,150));
    printf("Please press *0* after collecting.\n");

    scanf("%d",&input);
    goto exit;

    end:
    printf("Too many incorrect attempts!\n Your card has been BLOCKED.\n");
    printf("%c%c%c\n",Beep(200,200),Beep(200,200),Beep(200,200));

    exit:
    printf("Thank you for banking with us!\n");

    return 0;
}
