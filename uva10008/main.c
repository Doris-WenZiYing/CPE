#include <stdio.h>
#include <string.h>

int main()
{
    int n, f, max;
    char line[1000], word;
    int count[127] = {0};
    scanf("%d\n", &n);
    max = 0;
    for (int i = 0; i < n; i++)
    {
        gets(line);
        //如果要為了考試可以使用方便記得gets來使用，但如果以後出社會或其他地方建議使用fget因為會有溢位跟編譯器的問題
        for (int j = 0; j < strlen(line); j++)
        {
            word = line[j];
            if (word >= 'a' && word <= 'z')
                word -= 32;
            //由於輸入的資料有大寫小寫，而最後輸出都要大寫，所以由ascii來看得知英文字只要剪32就是打寫對應的碼了

            if (word >= 'A' && word <= 'Z')
                ++count[word];
            //統計英文字母
        }

        for (word = 'A'; word <= 'Z'; word++) //找出出現最多次數
        {
            if (count[word] > max)
                max = count[word];
        }
    }
    for (f = max; f > 0; f--)
    {
        for (word = 'A'; word <= 'Z'; word++)
        {
            if (count[word] == f)
                printf("%c %d\n", word, f);
        }
    }
}
