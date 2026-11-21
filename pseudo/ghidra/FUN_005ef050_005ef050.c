// FUN_005ef050  005ef050

int __fastcall FUN_005ef050(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  for (local_8 = 0; *(char *)(*(int *)(param_1 + 0x5c) + local_8) != '\0'; local_8 = local_8 + 1) {
    if (*(char *)(*(int *)(param_1 + 0x5c) + local_8) == '\n') {
      uVar1 = 0x20;
    }
    else {
      uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x5c) + local_8);
    }
    if (*(char *)(*(int *)(param_1 + 0x5c) + 1 + local_8) == '\0') {
      local_1c = 0xffffffff;
      iVar2 = 0;
    }
    else {
      local_1c = (uint)*(byte *)(*(int *)(param_1 + 0x5c) + 1 + local_8);
      iVar2 = local_8;
    }
    iVar2 = FUN_005ee950(CONCAT31((int3)((uint)iVar2 >> 8),uVar1),local_1c);
    local_c = (iVar2 - (uint)*(ushort *)(param_1 + 0x90)) + (int)*(short *)(param_1 + 0x94) +
              *(int *)(param_1 + 0xa8) + local_c;
  }
  return local_c;
}

