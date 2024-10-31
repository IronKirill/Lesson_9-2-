#pragma once
#include "Product.h"

namespace Products
{
    namespace Sport
    {
        class SportEquipment : public Product
        {
        protected:
            string sport;
            float weight;

        public:
            SportEquipment();
            SportEquipment(string name, float price, string manufacturer, int age,
                string sport, float weight);

            void setSport(string sport);
            void setWeight(float weight);

            string getSport()const;
            float getWeight()const;

            virtual void show()const override;
            virtual float calcPrice()const override;
        };
    }
}