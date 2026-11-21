// FUN_00555960  00555960

void __fastcall FUN_00555960(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005fc360();
  switch(uVar1) {
  case 0:
    *(undefined4 *)(DAT_00793424 + 0x2c) = 0;
    (**(code **)(*param_1 + 8))(1,0);
    break;
  case 1:
    FUN_005552b0(param_1);
    break;
  case 2:
    (**(code **)(*param_1 + 8))(1,0);
    break;
  case 3:
    FUN_00558240();
    FUN_005fc420(0);
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\videopokerdisplay.cpp",0x395);
  }
  return;
}

