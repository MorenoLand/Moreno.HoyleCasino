// FUN_00674160  00674160

void __fastcall FUN_00674160(int *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint local_c;
  int local_8;
  
  pvVar1 = operator_new(0x21496);
  (**(code **)(*param_1 + 0x70))();
  (**(code **)(*param_1 + 0x74))();
  FUN_00668d30(pvVar1);
  iVar2 = FUN_0062e710();
  for (local_8 = 0; local_8 < 0xa0; local_8 = local_8 + 1) {
    for (local_c = 0; local_c < 0x354; local_c = local_c + 1) {
      iVar3 = FUN_0062e6f0();
      *(undefined1 *)(iVar2 + iVar3 * local_8 + local_c) =
           *(undefined1 *)((int)pvVar1 + local_8 * 0x354 + local_c + 0x16);
    }
  }
  operator_delete(pvVar1);
  return;
}

