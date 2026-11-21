// FUN_006571e0  006571e0

void __thiscall FUN_006571e0(CPropertySection *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  ulong local_8;
  
  FUN_005f72f0(param_2);
  if (*(int *)(param_2 + 0x18) == 3) {
    for (local_8 = 0x4d7; (int)local_8 < 0x4e3; local_8 = local_8 + 1) {
      piVar3 = CPropertySection::Get(param_1,local_8,(ulong *)0x0);
      if (((piVar3 != (int *)0x0) &&
          (piVar1 = *(int **)(param_1 + local_8 * 4 + -0xd50), piVar1 != (int *)0x0)) &&
         (cVar2 = FUN_00600230(), cVar2 == '\0')) {
        cVar2 = (**(code **)(*piVar3 + 0x84))(param_2);
        if ((cVar2 == '\0') && (cVar2 = (**(code **)(*piVar1 + 0x84))(param_2), cVar2 == '\0')) {
          (**(code **)(*piVar1 + 0xb0))(0);
        }
        else {
          (**(code **)(*piVar1 + 0xb0))(3);
        }
      }
    }
  }
  return;
}

