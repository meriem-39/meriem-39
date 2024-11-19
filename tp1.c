#include<stdio.h> int main(){ int m[4][4],i,j; for(i=0;i<4;i++){ for(j=0;j<4;j++){ printf("m[%d][%d]",i,j); scanf("%d",m[i][j]); } }

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
