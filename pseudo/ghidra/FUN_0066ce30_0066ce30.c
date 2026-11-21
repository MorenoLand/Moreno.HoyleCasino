// FUN_0066ce30  0066ce30

void FUN_0066ce30(void)

{
  int iVar1;
  
  iVar1 = __RTDynamicCast(DAT_0162ee80,0,&Room::RTTI_Type_Descriptor,
                          &MainScreenRoom::RTTI_Type_Descriptor,0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x74) != 0)) {
    (**(code **)(**(int **)(iVar1 + 0x74) + 0x70))();
    if (*(undefined4 **)(iVar1 + 0x74) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar1 + 0x74))(1);
    }
    *(undefined4 *)(iVar1 + 0x74) = 0;
  }
  return;
}

