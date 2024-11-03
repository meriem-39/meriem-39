#include<stdio.h>
int main(){
	int m[4][4],i,j;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("m[%d][%d]",i,j);
			scanf("%d",m[i][j]);
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d",m[i][j]);
		}
		printf("/n");
	}
	for(i=0;i<4;i++){
		for(j=i+1;j<4;j++){
			int x=m[i][j];
			m[i][j]=m[j][i];
			m[j][i]=x;
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d",m[i][j]);
		}
		printf("/n");
	}
	return 0;
}
- 👋 Hi, I’m @meriem-39
- 👀 I’m interested in ...
- 🌱 I’m currently learning ...
- 💞️ I’m looking to collaborate on ...
- 📫 How to reach me ...
- 😄 Pronouns: ...
- ⚡ Fun fact: ...

<!---
meriem-39/meriem-39 is a ✨ special ✨ repository because its `README.md` (this file) appears on your GitHub profile.
You can click the Preview link to take a look at your changes.
--->
