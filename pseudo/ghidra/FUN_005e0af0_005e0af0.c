// FUN_005e0af0  005e0af0

void __thiscall
FUN_005e0af0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  piVar3 = (int *)0x0;
  for (local_8 = 0; iVar2 = (**(code **)(*param_1 + 0xe4))(param_1,piVar3), local_8 < iVar2;
      local_8 = local_8 + 1) {
    piVar3 = *(int **)(&DAT_007947f4 + local_8 * 0xc);
    if ((DAT_0163069c == 0) ||
       (cVar1 = FUN_00653e30(*(undefined4 *)(&DAT_007947f0 + local_8 * 0xc)), cVar1 == '\0')) {
      (**(code **)(*piVar3 + 0x98))(param_2,param_3,param_4,param_5);
    }
  }
  return;
}

