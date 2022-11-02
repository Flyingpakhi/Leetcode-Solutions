class Solution {
public:
    string capitalizeTitle(string title) {
        int count=0;
        int i=0;
        for(;i<title.size();i++){
            if(title[i]==' '){
                if(count>=3){
                    if(title[i-count]>='a'&& title[i-count]<='z')
                    title[i-count]=title[i-count]-'a'+'A';
                    for(int j=i-count+1;j<i;j++){
                        if(title[j]>='A'&& title[j]<='Z'){
                            title[j]=title[j]-'A'+'a';
                        }
                    }
                }
                else{
                     for(int j=i-count;j<i;j++){
                        if(title[j]>='A'&& title[j]<='Z'){
                            title[j]=title[j]-'A'+'a';
                        }
                    }
                }
                count=-1;
            }
            count++;
        }
        if(count>=3){
                    if(title[i-count]>='a'&& title[i-count]<='z')
                    title[i-count]=title[i-count]-'a'+'A';
                    for(int j=i-count+1;j<i;j++){
                        if(title[j]>='A'&& title[j]<='Z'){
                            title[j]=title[j]-'A'+'a';
                        }
                    }
                }
                else{
                     for(int j=i-count;j<i;j++){
                        if(title[j]>='A'&& title[j]<='Z'){
                            title[j]=title[j]-'A'+'a';
                        }
                    }
                }
        
        return title;
    }
};