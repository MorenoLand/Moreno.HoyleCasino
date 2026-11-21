// FUN_00599a70  00599a70

void __thiscall FUN_00599a70(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int local_18;
  undefined2 local_10 [4];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    local_10[local_18] = 0;
  }
  FUN_00462a40(4,param_1 + 200 + param_2 * 0xc,(param_2 == 4) + '\x05',local_10);
  iVar1 = FUN_00462ba0(local_10,4,0);
  uVar3 = FUN_00598ff0(param_2);
  uVar2 = (undefined4)(uVar3 >> 0x20);
  if ((uVar3 & 0xff) != 0) {
    if (2 < iVar1) {
LAB_00599b18:
      uVar5 = 1;
      goto LAB_00599b28;
    }
    if (iVar1 == 2) {
      uVar4 = FUN_004639e0(local_10,4);
      uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if (0xd < (int)uVar4) goto LAB_00599b18;
    }
  }
  uVar5 = 0;
LAB_00599b28:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar2,uVar5);
  return;
}

