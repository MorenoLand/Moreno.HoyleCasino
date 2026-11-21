// FUN_004c6210  004c6210

bool __fastcall FUN_004c6210(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_005dcb00(*(undefined4 *)(param_1 + 4));
  piVar2 = (int *)FUN_0063aac0(param_1,uVar1);
  return *piVar2 != 0;
}

