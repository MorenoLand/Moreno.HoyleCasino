// FUN_00457200  00457200

uint __fastcall FUN_00457200(uint param_1)

{
  char cVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x2c8) == '\0') {
    param_1 = param_1 & 0xffffff00;
  }
  else {
    cVar1 = FUN_0044f750(0xe,*(undefined4 *)(param_1 + 0x2d0));
    cVar2 = FUN_0044f750(0xd,*(undefined4 *)(param_1 + 0x2d0));
    if ((cVar1 == '\0') || (cVar2 == '\0')) {
      param_1 = 0;
    }
    else {
      param_1 = 1;
    }
  }
  return param_1;
}

