// FUN_00685cc0  00685cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00685cc0(int param_1,double param_2)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined8 uVar5;
  
  FUN_00684f70(param_1,0xffffffff);
  fVar4 = (float10)FUN_00684fe0(param_1,0xffffffff);
  dVar1 = (double)fVar4;
  if (1 < *(int *)(param_1 + 0x58)) {
    if (*(int *)(param_1 + 4) == 0) {
      return 0xffffff76;
    }
    if ((_DAT_006b2c50 <= param_2) && (param_2 <= dVar1)) {
      iVar2 = *(int *)(param_1 + 0x34);
      do {
        iVar2 = iVar2 + -1;
        if (iVar2 < 0) break;
        fVar4 = (float10)FUN_00684fe0(param_1,iVar2);
        dVar1 = (double)((float10)dVar1 - fVar4);
      } while (param_2 < dVar1);
      uVar5 = ftol();
      uVar3 = FUN_00685380(param_1,uVar5);
      return uVar3;
    }
  }
  return 0xffffff7d;
}

