// FUN_00531a10  00531a10

void __fastcall FUN_00531a10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x184) == '\0') {
    uVar2 = FUN_0062fbf0(6);
    *(undefined4 *)(param_1 + 0x198) = uVar2;
    uVar2 = FUN_00630f40((&PTR_s_SID_SLOTMACHINES_HOYLECASINOMESS_00724d0c)
                         [*(int *)(param_1 + 0x198)]);
    (**(code **)(**(int **)(param_1 + 0x188) + 0xb4))(uVar2);
  }
  else {
    iVar1 = FUN_0062fc30(1,0);
    if (iVar1 == 0) {
      uVar2 = FUN_0062fbf0(6);
      *(undefined4 *)(param_1 + 0x198) = uVar2;
      uVar2 = FUN_00630f40((&PTR_s_SID_SLOTMACHINES_HOYLECASINOMESS_00724d0c)
                           [*(int *)(param_1 + 0x198)]);
      (**(code **)(**(int **)(param_1 + 0x188) + 0xb4))(uVar2);
    }
    else {
      uVar2 = FUN_0062fbf0(5);
      *(undefined4 *)(param_1 + 0x198) = uVar2;
      uVar2 = FUN_00630f40((&PTR_s_SID_SLOTMACHINES_BROKENMESSAGE0_00724d24)
                           [*(int *)(param_1 + 0x198)]);
      (**(code **)(**(int **)(param_1 + 0x188) + 0xb4))(uVar2);
    }
  }
  iVar1 = FUN_005ef050();
  *(int *)(param_1 + 400) = iVar1 + 3;
  FUN_005ecc60(*(undefined4 *)(param_1 + 400));
  return;
}

