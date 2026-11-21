// FUN_006900f0  006900f0

undefined4 __thiscall
FUN_006900f0(int param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6,
            int *param_7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    if (param_2 != (int *)0x0) {
      iVar2 = GetDeviceCaps(*(HDC *)(param_1 + 0x18),8);
      *param_2 = iVar2;
    }
    if (param_3 != (int *)0x0) {
      iVar2 = GetDeviceCaps(*(HDC *)(param_1 + 0x18),10);
      *param_3 = iVar2;
    }
    if (param_4 != (int *)0x0) {
      iVar2 = GetDeviceCaps(*(HDC *)(param_1 + 0x18),0x6e);
      *param_4 = iVar2;
    }
    if (param_5 != (int *)0x0) {
      iVar2 = GetDeviceCaps(*(HDC *)(param_1 + 0x18),0x6f);
      *param_5 = iVar2;
    }
    if (param_6 != (int *)0x0) {
      iVar2 = GetDeviceCaps(*(HDC *)(param_1 + 0x18),0x70);
      *param_6 = iVar2;
    }
    if (param_7 != (int *)0x0) {
      iVar2 = GetDeviceCaps(*(HDC *)(param_1 + 0x18),0x71);
      *param_7 = iVar2;
    }
    uVar1 = 1;
  }
  return uVar1;
}

