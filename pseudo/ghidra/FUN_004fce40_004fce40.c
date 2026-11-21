// FUN_004fce40  004fce40

uint __fastcall FUN_004fce40(undefined4 param_1)

{
  uint uVar1;
  
  if ((*(char *)(DAT_007947e0 + 0x4ee8) == '\0') || (DAT_00791eb8 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_0047fdf0(param_1);
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}

