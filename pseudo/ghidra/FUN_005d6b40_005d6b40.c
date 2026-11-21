// FUN_005d6b40  005d6b40

undefined1 __fastcall FUN_005d6b40(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*DAT_007947e4 + 0x2c8))(*(undefined4 *)(param_1 + 4));
  if ((cVar1 == '\0') &&
     (cVar1 = (**(code **)(*DAT_007947e4 + 0x2cc))(*(undefined4 *)(param_1 + 4)), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}

