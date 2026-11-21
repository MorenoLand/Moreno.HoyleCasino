// FUN_006025c0  006025c0

void __fastcall FUN_006025c0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((char)param_1[0x6a] == '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)((int)param_1 + 9) = 0;
  }
  *(undefined1 *)(param_1 + 0x6a) = 1;
  if (param_1[1] != 0) {
    uVar2 = FUN_005f8950();
    uVar2 = FUN_005f8930(uVar2);
    cVar1 = (**(code **)(*param_1 + 0x80))(uVar2);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0xd8))(3);
      return;
    }
  }
  (**(code **)(*param_1 + 0xd8))(0);
  return;
}

