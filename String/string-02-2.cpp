  #include <stdio.h>
  #include <string.h>
  #define N 80
  
  void del_str(char *str, char *s, char *resultstr)   //删除函数 
  {
      int i, j, resultstr_len, s_len;                 //resultstr_len为resultstr字符串的长度，s_str为s字符串的长度 
      s_len = strlen(s);
      strcpy(resultstr, str);                         //将str拷贝到resultstr 
     char *p;                                         
     p = strstr(resultstr, s);                       //p指向s在resultstr中出项的首字符 
     resultstr_len = strlen(resultstr);
 
     while(p != NULL) {                             
         for(i = p - resultstr; i < resultstr_len - s_len + 1; i++) {   
             resultstr[i] = resultstr[i + s_len];
         } 
         resultstr_len = strlen(resultstr);
         p = strstr(resultstr, s);
     }
 }
 
 int main()
 {
     char str[N+1], s[N+1], resultstr[N+1];     //str为第一个字符串，s为第二个字符串，resultstr为删除后的字符串 
     gets(str);
     gets(s);
     del_str(str, s, resultstr);                //删除函数 
     printf("%s\n", resultstr);
     
     return 0;
 }