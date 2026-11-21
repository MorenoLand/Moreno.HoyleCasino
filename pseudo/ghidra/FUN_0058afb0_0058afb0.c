// FUN_0058afb0  0058afb0

void __fastcall FUN_0058afb0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005f5400();
  switch(uVar1) {
  case 0:
    FUN_0058acf0();
    break;
  case 1:
    FUN_0058a8c0();
    break;
  case 2:
    FUN_0058aa10();
    break;
  case 3:
    FUN_0058a690();
    (**(code **)(*param_1 + 0xd8))(0);
    FUN_005f87d0();
    if (DAT_0079357c != 0) {
      FUN_00583a20();
    }
    FUN_005f8990();
    DAT_00793584 = 0;
    break;
  case 4:
    FUN_0058a750();
  }
  return;
}

