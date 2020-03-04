within DataReconciliationSimpleTests;
model SimpleCircuit2
  import DataReconciliationSimpleTests;
  DataReconciliationSimpleTests.Lib.SimpleCircuit simpleCircuit(x1(uncertain=
          Uncertainty.refine), x2(uncertain=Uncertainty.refine))
    annotation (Placement(transformation(extent={{-40,0},{0,40}})));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end SimpleCircuit2;
