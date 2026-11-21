// FUN_00526ad0  00526ad0

void __thiscall FUN_00526ad0(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  
  cVar1 = FUN_00523440();
  if (((cVar1 == '\0') && (*(char *)(DAT_00793374 + 0xdbc) == '\0')) &&
     (cVar1 = (**(code **)(*param_1 + 0x2c4))(*(undefined4 *)(*(int *)(param_3 + 4) + 4)),
     cVar1 == '\0')) {
    *(undefined4 *)(DAT_00793374 + 0xdb8) = *(undefined4 *)(*(int *)(param_3 + 4) + 4);
    FUN_005226b0();
  }
  return;
}

