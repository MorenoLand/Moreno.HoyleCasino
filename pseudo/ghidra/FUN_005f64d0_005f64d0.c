// FUN_005f64d0  005f64d0

bool __thiscall FUN_005f64d0(int param_1,undefined2 *param_2)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x49) != '\0';
  if (bVar1) {
    *param_2 = *(undefined2 *)(param_1 + 0x4d);
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x4f);
  }
  return bVar1;
}

