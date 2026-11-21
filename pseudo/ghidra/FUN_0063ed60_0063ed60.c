// FUN_0063ed60  0063ed60

void __thiscall FUN_0063ed60(CPropertySection *param_1,int param_2)

{
  ulong uVar1;
  int *piVar2;
  ulong *puVar3;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x62 < local_8) {
      return;
    }
    puVar3 = (ulong *)(param_2 * 100 + 0x33);
    uVar1 = FUN_0063f1c0(param_2,local_8);
    piVar2 = CPropertySection::Get(param_1,uVar1,puVar3);
    if (piVar2 == (int *)0x0) break;
    (**(code **)(*piVar2 + 0xd0))();
    local_8 = local_8 + 1;
  }
  return;
}

