// FUN_00690880  00690880

undefined4 FUN_00690880(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  bool bVar6;
  short local_1c [4];
  undefined1 local_14 [20];
  
  if (param_3 != (undefined4 *)0x0) {
    FUN_0069d360(local_14,*param_3,param_3[1]);
    iVar1 = FUN_0069d470(local_14,8);
    local_1c[0] = 0;
    local_1c[1] = 0;
    local_1c[2] = 0;
    FUN_00690980(local_14,local_1c,6);
    iVar3 = 3;
    bVar6 = true;
    psVar4 = local_1c;
    psVar5 = (short *)s_vorbis_0078195c;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *psVar4 == *psVar5;
      psVar4 = psVar4 + 1;
      psVar5 = psVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      return 0xffffff7c;
    }
    if (iVar1 == 1) {
      if ((param_3[2] != 0) && (*(int *)(param_1 + 8) == 0)) {
        uVar2 = FUN_006909b0(param_1,local_14);
        return uVar2;
      }
    }
    else if (iVar1 == 3) {
      if (*(int *)(param_1 + 8) != 0) {
        uVar2 = FUN_00690a90(param_2,local_14);
        return uVar2;
      }
    }
    else if (((iVar1 == 5) && (*(int *)(param_1 + 8) != 0)) && (*(int *)(param_2 + 0xc) != 0)) {
      uVar2 = FUN_00690b70(param_1,local_14);
      return uVar2;
    }
  }
  return 0xffffff7b;
}

