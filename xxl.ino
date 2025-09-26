#include <LiquidCrystal_I2C.h>
const int col = 16;
const int row = 2;

LiquidCrystal_I2C lcd(0x27,16,2);
const char* a []= {
"...", "I still remember", "I will forever", "backseat secrets", "we won't", "ever tell", "I miss you", "XXL", "Miss Americana", "and all my", "friends love ya", "Back patio", "at the", "Bowery Hotel", "I miss you", "XXL", "...",
};
int b []=
{
900,1000,900,500,400,400,500,800,900,900,500,400,400,500,800,800,800
} ;
void setup() {
// put your setup code here, to run once:
lcd.init();
lcd.backlight();
}
void loop() {
// put your main code here, to run repeatedly:
lcd.setCursor(0,0);
for(int i=0; i<17; i++){
if(i%2==1)continue;
lcd.setCursor(0,0);
lcd.print(a[i]);
delay(b[i]*4);
lcd.setCursor(0,1);
lcd.print(a[i+1]);
delay(b[i+1]*2);
lcd.clear();
}
}