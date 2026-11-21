// FUN_00684fe0  00684fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00684fe0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined8 local_10;
  
  if ((1 < *(int *)(param_1 + 0x58)) && (*(int *)(param_1 + 4) != 0)) {
    iVar1 = *(int *)(param_1 + 0x34);
    if (param_2 < iVar1) {
      if (param_2 < 0) {
        iVar2 = 0;
        local_10 = 0.0;
        if (0 < iVar1) {
          do {
            fVar3 = (float10)FUN_00684fe0(param_1,iVar2);
            iVar2 = iVar2 + 1;
            local_10 = (double)(fVar3 + (float10)local_10);
          } while (iVar2 < iVar1);
        }
        return (float10)local_10;
      }
      return (float10)*(longlong *)(*(int *)(param_1 + 0x44) + 8 + param_2 * 0x10) /
             (float10)*(int *)(*(int *)(param_1 + 0x48) + 8 + param_2 * 0x20);
    }
  }
  return (float10)_DAT_006e4f90;
}

