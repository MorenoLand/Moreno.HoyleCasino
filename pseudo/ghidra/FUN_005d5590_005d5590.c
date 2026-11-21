// FUN_005d5590  005d5590

void __thiscall FUN_005d5590(undefined4 param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == -1) {
    param_3 = FUN_005f3bf0(param_1);
  }
  iVar1 = FUN_005d52e0();
  *(undefined1 *)(iVar1 + 0x47 + param_3) = param_2;
  return;
}

