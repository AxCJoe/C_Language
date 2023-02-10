/*
 * @Author: your name
 * @Date: 2021-09-06 19:03:46
 * @LastEditTime: 2021-09-06 19:14:36
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-10t.c
 */


int main()
{
    char isRain,isFree;

    printf("是否有空？(Y/N)");
    scanf("%c",&isFree);

    getchar();//* 输入两个scanf的时候，因为回车也算字符所以需要getchar
    if(isFree == 'Y')
    {   
        printf("是否下雨？(Y/N)");
        scanf("%c",&isRain);
    //if(isFree == 'Y')
    //{
        if(isRain == 'N')
        {
            printf("好机会,不下雨能约");
            

        }
        else
        {
            printf("有空，但下雨只能打伞约");

        }

    }
    else
    {
        printf("可惜没空在家hi");

    }
}
