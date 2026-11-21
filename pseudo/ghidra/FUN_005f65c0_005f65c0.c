// FUN_005f65c0  005f65c0

bool __thiscall FUN_005f65c0(int param_1,undefined2 *param_2)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x48) != '\0';
  if (bVar1) {
    *param_2 = *(undefined2 *)(param_1 + 0x4a);
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x4c);
  }
  return bVar1;
}

