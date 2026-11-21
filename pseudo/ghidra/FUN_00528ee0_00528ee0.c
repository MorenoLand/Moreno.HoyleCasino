// FUN_00528ee0  00528ee0

void __thiscall FUN_00528ee0(int param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  int local_8;
  
  for (local_8 = 0; local_8 < 0xa1; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + 0x288 + param_2 * 0x284 + local_8 * 4) = 0;
  }
  for (local_8 = 0; local_8 < 0xa1; local_8 = local_8 + 1) {
    uVar2 = FUN_0064c8a0(0,0);
    cVar1 = FUN_0064c6e0(uVar2);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x288 + param_2 * 0x284 + local_8 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 4 + local_8 * 4) + 0x48 + param_2 * 0x20);
    }
  }
  return;
}

