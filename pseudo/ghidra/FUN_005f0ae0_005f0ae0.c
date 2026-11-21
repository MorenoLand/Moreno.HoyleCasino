// FUN_005f0ae0  005f0ae0

void __thiscall FUN_005f0ae0(int param_1,undefined1 param_2)

{
  char cVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = *(undefined4 *)(param_1 + 0x1c);
  local_c = *(undefined4 *)(param_1 + 0x18);
  local_10 = *(undefined4 *)(param_1 + 0x14);
  local_14 = *(undefined4 *)(param_1 + 0x10);
  FUN_005f62f0(CONCAT31((int3)((uint)local_10 >> 8),param_2));
  *(undefined1 *)(param_1 + 0x9c) = param_2;
  if (*(int *)(param_1 + 0x28) != 0) {
    cVar1 = FUN_005f54a0();
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x1a8) + 0x14))(&local_14);
    }
  }
  return;
}

