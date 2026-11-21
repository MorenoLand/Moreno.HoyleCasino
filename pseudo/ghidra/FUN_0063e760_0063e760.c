// FUN_0063e760  0063e760

void __thiscall
FUN_0063e760(CPropertySection *param_1,int param_2,undefined4 param_3,int param_4,int param_5,
            undefined4 param_6,int param_7,int param_8,int param_9)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  CPropertySection::Get(param_1,3,(ulong *)0x0);
  if (param_9 == -1) {
    local_c = param_7;
  }
  else {
    local_c = (param_7 + 1) / 2;
  }
  uVar1 = FUN_005fa790(0,param_2 * 100 + 0x32,param_3,0x48,param_6,local_c * 0x19 + 0x12,param_4,
                       param_5,2,0x78,0x7c,0xa1,0xff,0xff,0xff,0);
  FUN_005ff5a0(uVar1);
  for (local_10 = 0; local_10 < param_7; local_10 = local_10 + 1) {
    if (param_9 == -1) {
      local_8 = param_4 + 0xc;
      local_18 = param_5 + 0xf + local_10 * 0x19;
    }
    else {
      if (local_10 < local_c) {
        local_20 = param_4 + 0xc;
      }
      else {
        local_20 = param_9;
      }
      local_8 = local_20;
      local_18 = param_5 + 0xf + (local_10 % local_c) * 0x19;
    }
    uVar1 = FUN_005f9ff0(0,0,param_2 * 100 + 0x34 + local_10,param_2 * 100 + 0x33,0x30d4ca,local_8,
                         local_18,1,*(undefined4 *)(param_8 + local_10 * 4),0x1f,0x45,0x42,
                         0xffffffff,0x14,0);
    FUN_005ff5a0(uVar1);
  }
  return;
}

