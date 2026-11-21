// FUN_005615d0  005615d0

void __thiscall
FUN_005615d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            int *param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_007947e0 + 0x4f14);
  if (iVar1 == 0) {
    *param_2 = 0x31224e;
    *param_3 = 0x312250;
    *param_4 = 0x31224f;
    *param_5 = 9;
  }
  else if (iVar1 == 5) {
    *param_2 = 0x312254;
    *param_3 = 0x312255;
    *param_4 = 0x312256;
    *param_5 = 10;
  }
  else if (iVar1 == 10) {
    *param_2 = 0x312251;
    *param_3 = 0x312253;
    *param_4 = 0x312252;
    *param_5 = 0xb;
  }
  else {
    *param_5 = 0;
    *param_4 = 0;
    *param_3 = 0;
    *param_2 = 0;
  }
  if (0xb < *param_5) {
    FUN_005e9f20("numPayouts <= VP_MAX_PAYOUTS","..\\Casino\\vpmdisplay.cpp",0x1fb,iVar1,param_1);
  }
  return;
}

