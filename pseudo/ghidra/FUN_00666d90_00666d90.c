// FUN_00666d90  00666d90

void FUN_00666d90(int param_1)

{
  int iVar1;
  undefined4 extraout_var;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  undefined1 local_4f [63];
  undefined4 local_10;
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  iVar5 = param_1;
  uVar6 = PTR_006b27f8._0_1_;
  memset(local_4f,0,0x3f);
  local_10 = 0;
  puVar3 = (undefined *)0x0;
  iVar4 = 0;
  uVar2 = extraout_var;
  do {
    iVar1 = FUN_00666c60(uVar2,puVar3,iVar4,iVar5,uVar6);
    if (iVar1 <= iVar4) {
LAB_00666e0e:
      if (puVar3 == (undefined *)0x0) {
        FUN_00666f00();
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (*(int *)(&DAT_007712e0 + iVar4 * 0x48) == param_1) {
      puVar3 = &DAT_007712e0 + iVar4 * 0x48;
      goto LAB_00666e0e;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

