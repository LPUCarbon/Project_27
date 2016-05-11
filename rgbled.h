#ifndef __rgbled_H__
#define __rgbled_H__

sbit ledR=P2^2;
sbit ledB=P2^0;
sbit ledG=P2^1;


void Delay(unsigned int t);
void ledR_OFF(void);
void ledR_ON(void);
void ledG_OFF(void);
void ledG_ON(void);
void ledB_OFF(void);
void ledB_ON(void);
void ledGtoR(void);
void ledRtoB(void);
void ledBtoG(void);

void Delay(unsigned int t)						   //延时函数
 {
 	while(t--);	
 }

void ledR_ON(void)
 {
 	unsigned int CYCLE=450,PWM_LOW=0;				//定义周期并赋值

		ledR=1;
		Delay(60000);								//增加延时使熄灭过程可见

		for(PWM_LOW=1;PWM_LOW<CYCLE;PWM_LOW++)
		//PWM_LOW表示低电平时间，这个循环中低电平时长从1累加到CYCLE（周期）的值，即600次
		{
			ledR=0;								    //点亮
			Delay(PWM_LOW);							//延时
			ledR=1;
			Delay(CYCLE-PWM_LOW);
		}

		ledR=0;			
 }

 void ledG_ON(void)
 {
 	unsigned int CYCLE=450,PWM_LOW=0;				//定义周期并赋值

		ledG=1;
		Delay(60000);								//增加延时使熄灭过程可见

		for(PWM_LOW=1;PWM_LOW<CYCLE;PWM_LOW++)
		//PWM_LOW表示低电平时间，这个循环中低电平时长从1累加到CYCLE（周期）的值，即600次
		{
			ledG=0;								    //点亮
			Delay(PWM_LOW);							//延时
			ledG=1;
			Delay(CYCLE-PWM_LOW);
		}

		ledG=0;			
 }

 void ledB_ON(void)
 {
 	unsigned int CYCLE=450,PWM_LOW=0;				//定义周期并赋值

		ledB=1;
		Delay(60000);								//增加延时使熄灭过程可见

		for(PWM_LOW=1;PWM_LOW<CYCLE;PWM_LOW++)
		//PWM_LOW表示低电平时间，这个循环中低电平时长从1累加到CYCLE（周期）的值，即600次
		{
			ledB=0;								    //点亮
			Delay(PWM_LOW);							//延时
			ledB=1;
			Delay(CYCLE-PWM_LOW);
		}

		ledR=0;			
 }

 void ledR_OFF(void)
 {
 	unsigned int CYCLE=225,PWM_LOW=0;				//定义周期并赋值

		ledR=0;
		for(PWM_LOW=CYCLE-1;PWM_LOW>0;PWM_LOW--)	//变暗
		{
			ledR=0;
			Delay(PWM_LOW);
			ledR=1;
			Delay(CYCLE-PWM_LOW);
		}
 }

 void ledG_OFF(void)
 {
 	unsigned int CYCLE=225,PWM_LOW=0;				//定义周期并赋值

		ledG=0;
		for(PWM_LOW=CYCLE-1;PWM_LOW>0;PWM_LOW--)	//变暗
		{
			ledG=0;
			Delay(PWM_LOW);
			ledG=1;
			Delay(CYCLE-PWM_LOW);
		}
 }

 void ledB_OFF(void)
 {
 	unsigned int CYCLE=225,PWM_LOW=0;				//定义周期并赋值

		ledB=0;
		for(PWM_LOW=CYCLE-1;PWM_LOW>0;PWM_LOW--)	//变暗
		{
			ledB=0;
			Delay(PWM_LOW);
			ledB=1;
			Delay(CYCLE-PWM_LOW);
		}
 }

 void ledGtoR(void)
 {
 	unsigned int CYCLE=450,PWM_LOW=0;				//定义周期并赋值

									//增加延时使熄灭过程可见

		for(PWM_LOW=1;PWM_LOW<CYCLE;PWM_LOW++)
		//PWM_LOW表示低电平时间，这个循环中低电平时长从1累加到CYCLE（周期）的值，即600次
		{
			ledR=0;ledG=1;								    //点亮
			Delay(PWM_LOW);							//延时
			ledR=1;ledG=0;
			Delay(CYCLE-PWM_LOW);
		}

		ledR=0;ledG=1;			
 }

 void ledRtoB(void)
 {
 	unsigned int CYCLE=450,PWM_LOW=0;				//定义周期并赋值

									//增加延时使熄灭过程可见

		for(PWM_LOW=1;PWM_LOW<CYCLE;PWM_LOW++)
		//PWM_LOW表示低电平时间，这个循环中低电平时长从1累加到CYCLE（周期）的值，即600次
		{
			ledB=0;ledR=1;								    //点亮
			Delay(PWM_LOW);							//延时
			ledB=1;ledR=0;
			Delay(CYCLE-PWM_LOW);
		}

		ledB=0;ledR=1;			
 }

 void ledBtoG(void)
 {
 	unsigned int CYCLE=450,PWM_LOW=0;				//定义周期并赋值

									//增加延时使熄灭过程可见

		for(PWM_LOW=1;PWM_LOW<CYCLE;PWM_LOW++)
		//PWM_LOW表示低电平时间，这个循环中低电平时长从1累加到CYCLE（周期）的值，即600次
		{
			ledG=0;ledB=1;								    //点亮
			Delay(PWM_LOW);							//延时
			ledG=1;ledB=0;
			Delay(CYCLE-PWM_LOW);
		}

		ledG=0;ledB=1;			
 }

#endif