
//bcc  -Md hello.c -o HELLO.COM

#define varn 0xc080

int lowercmp(a,b);
void getss(s,i);
char getcc();
void sputs(cc);
void scopy(s1,s2);
void scat(s1,s2);
void slower(s1);
int main()
{
        char *r=" ";
        char *rr="\n";
        char *rrr;
        int nnn=0;
	int nn=0;
	int n=0;
        int nt=0;
	char sss1[128];
        char argv0[89];
        char *argv=0x82;
        char *argvs=0x81;
        int t=0;
        int f1=0;
        int bufsize =9000;
        char ss1[9000];
        char *sss=ss1;
        char *ttt=sss;

        cls3(0x20f0);
        copys();
        if (argv[0]=='\0' || argvs[0]=='\0' || argvs[2]=='\0'){
            nt=tcopys();
        }
	
                        
                        t=1;
                        n=filesizes(argv);
                        


                        if ((char)n==6) systems("cmd.com");
			f1=opens(argv);
		
		
			
			t=reads(f1,sss,bufsize/2);
			sss[bufsize+1]=0;
			sss[t+1]=0;
                        sss[t+2]=0;
                        sss[t+3]=0;
                        sss[t+4]=0;
                        sss[t+5]=0;
			closes(f1);
	
        sss=ss1+nt;
	ttt=sss;
if (*ttt==0)systems("cmd.com");
while (*ttt!=0) {
    if (*ttt == '\n') {
        *ttt = '\0';
        ttt++;
        break;
    }
    ttt++;
}
        trcopys(ttt-ss1);
        nn=1;
	while(nn){
	    nn=0;
	    if(nn==0){
                n=1;
                nnn=0;
                while(n){
                  sss1[nnn]=sss[nnn];
                  if(sss[nnn]==32 || sss[nnn]==0 || sss[nnn]==10 || sss[nnn]==13){
                      sss1[nnn]=0;
                      n=0;
                  }
                  nnn++;
                  scat(sss1,".com");
                }
                n=filesizes(sss1);
	        if ((char)n!=6)nnn=systems(sss);
	        sputc(13);
	        sputc(10);
	        if (n==6){
	            sputs("error");
	            sputc(13);
	            sputc(10);
	        }
	    }
            sss=ttt;
             while (*ttt!=0) {
                 if (*ttt == '\n') {
                 *ttt = '\0';
                 ttt++;
                 break;
             }
             ttt++;
            }

            if (*ttt==0)nn=0;
	    
	}
        ttcopys(0);
        systems("cmd.com");
	return 0;
}
int lowercmp(a,b)
char *a;
char *b;
{
    int n=0;
    for(n=0;n<78;n++){
        if(b[n]==0){
            return 1;    
        
        }else{
            a[n]=a[n] | 0x20;
            b[n]=b[n] | 0x20;
            if(a[n]!=b[n])return 0;
        }
    }
    return 1;
}
void getss(s,i)
char *s;
int i;
{   
    int nn=0;
    int n=0;
    
    for (n=0;n<i;n++){
        s[n]=getcc();
        
        
        if(s[n]==13){
            s[n]=0;
            
            
            
            n=i+1;
            
        }
    }
    
    s[i]=0;
    
}
char getcc(){
    char keys=getchar();
    sputc(keys);
    return keys;
}
void sputs(cc)
char *cc;
{
		int i=0;
while(cc[i]!=0){
		sputc(cc[i]);
		i++;
}
}
void scopy(s1,s2)
char *s1;
char *s2;
{
	char cc=0;
	int counter=0;
	do{
		s1[counter]=s2[counter];
		cc=s2[counter];
		counter++;
	}while(cc!=0);
	
}
void scat(s1,s2)
char *s1;
char *s2;
{
	char *s3;
	char cc=0;
	int counter=0;
	do{
		cc=s1[counter];
		counter++;
	}while(cc!=0);
	s3=s1+counter-1;
	scopy(s3,s2);
}

void slower(s1)
char *s1;
{
	char *s3;
	char cc=0;
	int counter=0;
	do{
		cc=s1[counter];
		if (cc>='A' && cc<='Z')s1[counter]=cc+32;
		counter++;
	}while(cc!=0);
}

#asm
.globl _cls3
.globl _sputc
.globl _getchar 
.globl _systems
.globl _opens
.globl _closes
.globl _reads
.globl _tcopys
.globl _trcopys
.globl _ttcopys


_cls3:
    mov si,sp
    add si,*0x2
    mov dx,[si]
    mov ax,*0xb800
    push ds
    mov ds,ax
    
    mov ax,dx
    mov cx,*0x8a0
    mov si,*0x1
    
cls31:
    
    mov [si],al    
    inc si
    inc si
    dec cx
    cmp cx,*0x0
    jnz cls31
    pop ds
    ret
_copys:
    mov si,*0x80
    mov cx,0
    mov cl,[si]
    add si,cx
    mov ax,*0
    mov [si],al
    mov si,*0x81
    ret
_tcopys:
    mov di,*0x82
    push ds
    mov ax,*0x8000
    mov ds,ax
    mov si,*0x0
    seg ds
    mov ax,[si]
    push ax
    inc si 
    inc si
_copys2:
    seg ds
    mov al,[si]
    seg es 
    mov [di],al
    inc di
    inc si
    cmp al,0
    jnz _copys2
    pop ax
    pop ds
    ret
_trcopys:
    mov si,sp
    add si,*2
    mov dx,[si]
    mov di,*0x82
    push ds
    mov ax,*0x8000
    mov ds,ax
    mov si,*0x0
    seg ds
    mov [si],dx
    inc si 
    inc si
_copys3:
    seg es
    mov al,[di]
    seg ds 
    mov [si],al
    inc di
    inc si
    cmp al,0
    jnz _copys3
    pop ds
    ret
_ttcopys:
    mov si,sp
    add si,*2
    mov dx,[si]
    mov di,*0x82
    push ds
    mov ax,*0x8000
    mov ds,ax
    mov si,*0x0
    seg ds
    mov [si],dx
    inc si
    inc si
    pop ds
    ret
_sputc:
    mov si,sp
    add si,*0x2
    mov ax,[si]
    mov cx,*0x1
    mov bh,*0x0
    mov bl,*0x7
    mov ah,*0xe
    int $10
    ret
_getchar:
    mov ax,*0
    int $16
    ret
_filesizes:
    mov si,sp
    add si,*2
    mov dx,[si]
    mov si,dx
    mov ax,*0x06
    int $22
    push ax 
    cmp ax,0
    jnz _filesize2
    pop ax
    mov ah,0
    ret
_filesize2:
    mov ax,*0x08
    int $22
    pop ax
    mov ah,0
    ret  
_opens:
    mov si,sp
    add si,*2
    mov dx,[si]
    mov si,dx
    mov ax,*0x06
    int $22
    mov ax,si
    ret
_closes:
    mov si,sp
    add si,*2
    mov dx,[si]
    mov si,dx
    mov ax,*0x08
    int $22
    ret
_reads:
    mov di,sp
    add di,*2
    mov si,[di]
    add di,*2
    mov bx,[di]
    add di,*2
    mov cx,[di]
    mov ax,*0x07
    int $22
    mov ax,cx
    ret
_systems:
    mov bx,sp
    add bx,*0x2
    mov dx,[bx]
    mov bx,dx
    
    mov ax,*0x3
    int $22
    ret
systems2:
    mov ax,1
    ret
#endasm

