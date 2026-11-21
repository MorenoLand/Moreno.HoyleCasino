// FUN_00622d10  00622d10

int FUN_00622d10(void)

{
  void *pvVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_8;
  
  pvVar1 = operator_new(0x1ff0);
  iVar2 = (int)pvVar1 + 0x3fc;
  local_10 = 0;
  for (local_8 = 0; (int)local_8 < 0x10; local_8 = local_8 + 1) {
    *(int *)(iVar2 + local_8 * 4) = local_10;
    *(int *)(iVar2 + local_8 * -4) = -local_10;
    local_10 = local_10 + 1;
  }
  while ((int)local_8 < 0x30) {
    *(int *)(iVar2 + local_8 * 4) = local_10;
    *(int *)(iVar2 + local_8 * -4) = -local_10;
    local_8 = local_8 + 1;
    local_10 = (uint)((local_8 & 1) == 0) + local_10;
  }
  for (; (int)local_8 < 0x100; local_8 = local_8 + 1) {
    *(int *)(iVar2 + local_8 * 4) = local_10;
    *(int *)(iVar2 + local_8 * -4) = -local_10;
  }
  return iVar2;
}

