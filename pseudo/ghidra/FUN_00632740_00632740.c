// FUN_00632740  00632740

undefined4 FUN_00632740(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (0x1870c < param_1)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_0076fda0 + param_1 * 4);
  }
  return uVar1;
}

