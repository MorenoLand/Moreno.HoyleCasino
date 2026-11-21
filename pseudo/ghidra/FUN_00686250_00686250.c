// FUN_00686250  00686250

undefined8 FUN_00686250(int *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 10);
  return CONCAT44((((uVar1 >> 0x18) << 8 | (uVar1 & 0xffffff) >> 0x10) << 8 |
                  (uVar1 << 8 & 0xffffff) >> 0x10) << 8 | (uVar1 << 8 & 0xffff) >> 8,
                  *(undefined4 *)(*param_1 + 6));
}

