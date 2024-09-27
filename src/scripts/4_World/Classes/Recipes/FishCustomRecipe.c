modded class PrepareFish extends RecipeBase
{

    override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
    {
        ItemBase ingredient = ingredients[0];

        for (int i=0; i < results.Count(); i++)
        {
            ItemBase item_result;
            Class.CastTo(item_result, results.Get(i));

            MiscGameplayFunctions.TransferItemProperties(ingredient, item_result);
            item_result.SetQuantityNormalized(Math.RandomFloat(0.1,0.4));
        }

    }
}; 
