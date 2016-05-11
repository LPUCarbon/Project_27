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

void Delay(unsigned int t)						   //��ʱ����
 {
 	while(t--);	
 }

void ledR_ON(void)
 {
 	unsigned int CYCLE=450,PWM_LOW=0;				//�������ڲ���ֵ

		ledR=1;
		Delay(60000);								//������ʱʹϨ����̿ɼ�

		for(PWM_LOW=1;PWM_LOW<CYCLE;PWM_LOW++)
		//PWM_LOW��ʾ�͵�ƽʱ�䣬���ѭ���е͵�ƽʱ����1�ۼӵ�CYCLE�����ڣ���ֵ����600��
		{
			ledR=0;								    //����
			Delay(PWM_LOW);							//��ʱ
			ledR=1;
			Delay(CYCLE-PWM_LOW);
		}

		ledR=0;			
 }

 void ledG_ON(void)
 {
 	unsigned int CYCLE=450,PWM_LOW=0;				//�������ڲ���ֵ

		ledG=1;
		Delay(60000);								//������ʱʹϨ����̿ɼ�

		for(PWM_LOW=1;PWM_LOW<CYCLE;PWM_LOW++)
		//PWM_LOW��ʾ�͵�ƽʱ�䣬���ѭ���е͵�ƽʱ����1�ۼӵ�CYCLE�����ڣ���ֵ����600��
		{
			ledG=0;								    //����
			Delay(PWM_LOW);							//��ʱ
			ledG=1;
			Delay(CYCLE-PWM_LOW);
		}

		ledG=0;			
 }

 void ledB_ON(void)
 {
 	unsigned int CYCLE=450,PWM_LOW=0;				//�������ڲ���ֵ

		ledB=1;
		Delay(60000);								//������ʱʹϨ����̿ɼ�

		for(PWM_LOW=1;PWM_LOW<CYCLE;PWM_LOW++)
		//PWM_LOW��ʾ�͵�ƽʱ�䣬���ѭ���е͵�ƽʱ����1�ۼӵ�CYCLE�����ڣ���ֵ����600��
		{
			ledB=0;								    //����
			Delay(PWM_LOW);							//��ʱ
			ledB=1;
			Delay(CYCLE-PWM_LOW);
		}

		ledR=0;			
 }

 void ledR_OFF(void)
 {
 	unsigned int CYCLE=225,PWM_LOW=0;				//�������ڲ���ֵ

		ledR=0;
		for(PWM_LOW=CYCLE-1;PWM_LOW>0;PWM_LOW--)	//�䰵
		{
			ledR=0;
			Delay(PWM_LOW);
			ledR=1;
			Delay(CYCLE-PWM_LOW);
		}
 }

 void ledG_OFF(void)
 {
 	unsigned int CYCLE=225,PWM_LOW=0;				//�������ڲ���ֵ

		ledG=0;
		for(PWM_LOW=CYCLE-1;PWM_LOW>0;PWM_LOW--)	//�䰵
		{
			ledG=0;
			Delay(PWM_LOW);
			ledG=1;
			Delay(CYCLE-PWM_LOW);
		}
 }

 void ledB_OFF(void)
 {
 	unsigned int CYCLE=225,PWM_LOW=0;				//�������ڲ���ֵ

		ledB=0;
		for(PWM_LOW=CYCLE-1;PWM_LOW>0;PWM_LOW--)	//�䰵
		{
			ledB=0;
			Delay(PWM_LOW);
			ledB=1;
			Delay(CYCLE-PWM_LOW);
		}
 }

 void ledGtoR(void)
 {
 	unsigned int CYCLE=450,PWM_LOW=0;				//�������ڲ���ֵ

									//������ʱʹϨ����̿ɼ�

		for(PWM_LOW=1;PWM_LOW<CYCLE;PWM_LOW++)
		//PWM_LOW��ʾ�͵�ƽʱ�䣬���ѭ���е͵�ƽʱ����1�ۼӵ�CYCLE�����ڣ���ֵ����600��
		{
			ledR=0;ledG=1;								    //����
			Delay(PWM_LOW);							//��ʱ
			ledR=1;ledG=0;
			Delay(CYCLE-PWM_LOW);
		}

		ledR=0;ledG=1;			
 }

 void ledRtoB(void)
 {
 	unsigned int CYCLE=450,PWM_LOW=0;				//�������ڲ���ֵ

									//������ʱʹϨ����̿ɼ�

		for(PWM_LOW=1;PWM_LOW<CYCLE;PWM_LOW++)
		//PWM_LOW��ʾ�͵�ƽʱ�䣬���ѭ���е͵�ƽʱ����1�ۼӵ�CYCLE�����ڣ���ֵ����600��
		{
			ledB=0;ledR=1;								    //����
			Delay(PWM_LOW);							//��ʱ
			ledB=1;ledR=0;
			Delay(CYCLE-PWM_LOW);
		}

		ledB=0;ledR=1;			
 }

 void ledBtoG(void)
 {
 	unsigned int CYCLE=450,PWM_LOW=0;				//�������ڲ���ֵ

									//������ʱʹϨ����̿ɼ�

		for(PWM_LOW=1;PWM_LOW<CYCLE;PWM_LOW++)
		//PWM_LOW��ʾ�͵�ƽʱ�䣬���ѭ���е͵�ƽʱ����1�ۼӵ�CYCLE�����ڣ���ֵ����600��
		{
			ledG=0;ledB=1;								    //����
			Delay(PWM_LOW);							//��ʱ
			ledG=1;ledB=0;
			Delay(CYCLE-PWM_LOW);
		}

		ledG=0;ledB=1;			
 }

#endif