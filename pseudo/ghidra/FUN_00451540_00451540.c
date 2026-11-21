// FUN_00451540  00451540

void __thiscall FUN_00451540(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint local_8;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x2c2);
  if (uVar2 != 0) {
    *param_2 = 0xffffffff;
    *param_3 = 0xffffffff;
    local_8 = 0;
    while ((int)local_8 < 7) {
      iVar1 = FUN_0044f6c0(CONCAT22((short)(uVar2 >> 0x10),
                                    *(undefined2 *)(param_1 + 4 + local_8 * 2)));
      if ((iVar1 != *(int *)(param_1 + 0x2d0)) &&
         (iVar1 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + local_8 * 2)), iVar1 != -1)) {
        if (*param_2 != 0xffffffff) {
          *param_3 = local_8;
          return;
        }
        *param_2 = local_8;
      }
      uVar2 = local_8 + 1;
      local_8 = uVar2;
    }
  }
  return;
}

