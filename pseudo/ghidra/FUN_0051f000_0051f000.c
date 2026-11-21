// FUN_0051f000  0051f000

void __fastcall FUN_0051f000(int param_1)

{
  undefined8 uVar1;
  undefined1 local_214 [256];
  char local_114 [260];
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = 2;
  for (local_c = 0; local_c < *(int *)(param_1 + 0x22c); local_c = local_c + 1) {
    uVar1 = FUN_0064c8a0(*(undefined4 *)(param_1 + 0x3c0 + local_c * 4),0);
    FUN_0064c8d0(uVar1,local_214,1,1,1);
    sprintf(local_114,"%s: %s",param_1 + 0x230 + local_c * 100,local_214);
    FUN_005fa5b0(0,local_8 + local_c,local_114,0x1f,0x104,0x1b,0x21,local_c * 0x19 + 0x50,1,1,
                 0xffffffff);
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

