// FUN_0056b2b0  0056b2b0

void __thiscall FUN_0056b2b0(int param_1,int param_2,char param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  int local_214;
  char local_20c [256];
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  sprintf(local_10c,"Hand %d: ",param_2);
  for (local_214 = 0; local_214 < 5; local_214 = local_214 + 1) {
    sVar1 = *(short *)(param_1 + 0xf6 + param_2 * 10 + local_214 * 2);
    if (sVar1 == 0) {
      strcat(local_10c,"EMPTY,");
    }
    else {
      uVar2 = FUN_00641290(sVar1,0);
      uVar2 = FUN_00641280(CONCAT22(extraout_var,sVar1),uVar2);
      FUN_006413c0(local_20c,uVar2);
      if (local_214 < 4) {
        strcat(local_20c,",");
      }
      strcat(local_10c,local_20c);
    }
  }
  if (param_3 != '\0') {
    strcat(local_10c,"\n");
  }
  FUN_0062fde0(local_10c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

