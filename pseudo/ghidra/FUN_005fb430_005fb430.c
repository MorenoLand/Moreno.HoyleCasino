// FUN_005fb430  005fb430

undefined4 __thiscall FUN_005fb430(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005fb1b0(param_2,param_1 + 0x44);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = __RTDynamicCast(iVar1,0,&sciFeature::RTTI_Type_Descriptor,
                            &sciTabGroup::RTTI_Type_Descriptor,0);
  }
  return uVar2;
}

